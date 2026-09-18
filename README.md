# Clock Domain Crossing (CDC) Synchronizer

## Overview

This project implements a **Clock Domain Crossing (CDC) Synchronizer** for safely transferring a single-bit control signal between two asynchronous clock domains.

When a signal crosses between unrelated clock domains, the receiving flip-flop can enter a **metastable state** if the signal changes close to the active clock edge. A multi-stage synchronizer reduces the probability of metastability propagating into the destination logic.

## Architecture

The design uses a **two-flip-flop synchronizer**:

```text
Source Domain                 Destination Domain

    Signal
      │
      ▼
   ┌───────┐
   │  FF1  │
   └───┬───┘
       │
       ▼
   ┌───────┐
   │  FF2  │
   └───┬───┘
       │
       ▼
   Synchronized
     Signal
