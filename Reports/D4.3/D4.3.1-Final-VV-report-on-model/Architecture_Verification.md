Within the CENELEC Process the Architecture Verification is performed in the design phase.
This worksplit for architecture verification [ADD document D3_5_3](https://github.com/openETCS/modeling/blob/master/openETCS%20ArchitectureAndDesign/D3.5.3/D3_5_3.pdf)


# ADD Document D3_5_3
## Chapter 1 Introduction (2 pages) 
@michaelmoensters
## Chapter 2 System Architecture (p3-p7: 4 pages) 
@michaelmoensters
## Chapter 3 F1: Receive Information from Trackside (-p15:7 pages) 

## Chapter 5 ETCS Kernel

## Chapter 4 F2: ETCS Kernel 
# 4.1 Receive Trackside Information
- [ ] 4.1 Receive Trackside Information (p16-p26) @janWelte 
- [x] 4.1.3.1 Receive Trackside message (p27-29) @janWelte 
      #304 
- [x] 4.1.3.2 CheckBG consistency (p29-p30) @AbdelnasirMohamed 
       #301 
- [ ] 4.1.3.3 Check EuroRadioMessage (p30) @marcbehrens
- [ ] 4.1.3.4 ValidateDataDirection (p30-31) @marcbehrens
- [ ] 4.1.3.5 Information Filter (p31-p33) @janWelte 
      #303 

## 4.2 Speed and Distance Monitoring
- [ ] 4.2 Speed and Distance Monitoring (p33-p50)

## 4.3 Manage_ETCS_Procedures
- [ ] 4.3 Manage_ETCS_Procedures (p50-p61)@wangwei2015

## 4.4 Manage_Track_Data
- [ ] 4.4 Manage_Track_Data (p61-p64)
- [ ] 4.4.3.2 Provide_Position_Report (p64-p66) @michaelmoensters

### 4.5 trainData
- [ ] 4.5 trainData (p66-p72)

### 4.6 Mode_and_Level (p72-81)
- [ ]  4.6.3.3 Check_and_Provide_Mode_and_Level
- 4.6.3.1 Level Management (will change  - architecture verificaiton foreseen for next iteration)
- [x]  4.6.3.2 Mode_Management (p79-p80: 2 pages)  @marcbehrens (architecture ver)
- [ ]  4.6.3.3 Check_and_Provide_Mode_and_Level (p80-p81)

### 4.7 Manage_Radio_Communication
- 4.7 Manage_Radio_Communication (will change - architecture verificaiton foreseen for next iteration) (p81-p85)


### 5.4 F2.3: trainData @michaelmoensters
### 5.7 Calculate Train Position @FrancoisRevest 

## Chapter 6 Measure Train Movement (empty)

## Chapter 7 F4: Manage Radio Communication (empty)

## Chapter 8: F5: Manage JRU (empty)

## Chapter 9 F6: DMI Controller

## Chapter 10 F7: Manage TIU

## References (p98)

total number of pages of document: 
page i-xii: manegerial part
pages 1- 98: content part

# D3_5_3 Trackside @janWelte 
- [x] verification of D3_5_3 Trackside
  Verificatoin Report on [Dynmic Trackside model](https://github.com/openETCS/validation/blob/703d0b2fc1c27783e3c2f2bef3102e518e867e11/Reports/VerificationReports/Trackside/VerfRprt-DynamicTracksideModel_150821-jw-V01.pdf)


Additional questions:
- [ ] what are the time constraints?
- [ ] common data dictionary is needed
- [ ] ADD input and output is normally just a reference to the data dictionary
