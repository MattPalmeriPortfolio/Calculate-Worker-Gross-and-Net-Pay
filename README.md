# Calculate-Worker-Gross-and-Net-Pay

Contents
---------------------
* File Contents
* Introduction
* Algorithm
* Requirements

## File Contents
	
	Calculate_Worker_Pay.cpp

## Introduction
Book practice project from Problem Solving With C++ Chapter 2. Project 6.
This program determines a worker's gross and net pay as well as the amount per deduction from gross pay, based on a user's input of hours worked and # of dependents. Demonstrates abilities to conduct calculations and use if/else statements in c++.
Written using Microsoft Visual Studio. 

## Algorithm
	Determine the worker's gross and net pay based off tax rate and dependent costs, from user inputs of hours worked and number of dependents
		1. initialize constants
			1a. hourly pay (16.78)
			1b. overtime rate (1.5)
			1c. social security tax (0.06)
			1d. federal income tax (0.14)
			1e. state income tax (0.05)
			1f. union dues (flat 10 bux)
			1g. dependent threshold (3)
			1h. threshold cost (flat 35 bux)
		2. initialize variables hours worked, # of dependents, gross pay, and net pay
		3. greet user and take inputs for hours worked and # of dependents
		4. calculate gross pay by multiplying hours worked by hourly pay, then output to user
			4a. if hours worked exceeds 40, multiply by overtime rate for all hours after 40
			4b. set value of net pay to gross pay
		5. calculate the net pay and output the deductions
			5a. multiply gross pay by social security tax; output and subtract from net pay
			5b. multiply gross pay by federal income tax; output and subtract from net pay
			5c. multiply gross pay by state income tax; output and subtract from net pay
			5d. subtract union dues from net pay; output union dues
			5e. if number of dependents >= dependent threshold, subtract threshold cost from net pay; output threshold cost
			5f. output net pay

## Requirements
No requirements or modules needed for running this program.
