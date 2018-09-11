/*
 * Merge of various auto-generated memory map and register
 * definition files.
 */

/* Selected set of memory-map definitions:  */
#define MM_IOU_S	0xff000000
#define MM_IPI	0xff300000
#define MM_LPD_SLCR	0xff410000
#define MM_LPD_SLCR_SECURE	0xff4b0000
#define MM_CRL_APB	0xff5e0000
#define MM_OCM	0xff960000
#define MM_LPD_XPPU	0xff980000
#define MM_RPU	0xff9a0000
#define MM_AFIFM6	0xff9b0000
#define MM_LPD_XPPU_SINK	0xff9c0000
#define MM_USB3_0	0xff9d0000
#define MM_USB3_1	0xff9e0000
#define MM_APM_INTC_OCM	0xffa00000
#define MM_APM_LPD_FPD	0xffa10000
#define MM_AMS_CTRL	0xffa50000
#define MM_AMS_PS_SYSMON	0xffa50800
#define MM_AMS_PL_SYSMON	0xffa50c00
#define MM_RTC	0xffa60000
#define MM_OCM_XMPU_CFG	0xffa70000
#define MM_ADMA_CH0	0xffa80000
#define MM_ADMA_CH1	0xffa90000
#define MM_ADMA_CH2	0xffaa0000
#define MM_ADMA_CH3	0xffab0000
#define MM_ADMA_CH4	0xffac0000
#define MM_ADMA_CH5	0xffad0000
#define MM_ADMA_CH6	0xffae0000

#define MM_IOU_GPV      0xfe000000
#define MM_LPD_GPV      0xfe100000
#define MM_USB3_0_XHCI  0xfe200000
#define MM_USB3_1_XHCI  0xfe300000
#define MM_CORESIGHT_SOC_ROM    0xfe800000
#define MM_CORESIGHT_SOC_TSGEN  0xfe900000
#define MM_CORESIGHT_SOC_FUNN_0 0xfe910000
#define MM_CORESIGHT_SOC_FUNN_1 0xfe920000
#define MM_CORESIGHT_SOC_FUNN_2 0xfe930000
#define MM_CORESIGHT_SOC_ETF_1  0xfe940000
#define MM_CORESIGHT_SOC_ETF_2  0xfe950000
#define MM_CORESIGHT_SOC_REPLIC 0xfe960000
#define MM_CORESIGHT_SOC_ETR    0xfe970000
#define MM_CORESIGHT_SOC_TPIU   0xfe980000
#define MM_CORESIGHT_SOC_CTI_0  0xfe990000
#define MM_CORESIGHT_SOC_CTI_1  0xfe9a0000
#define MM_CORESIGHT_SOC_CTI_2  0xfe9b0000
#define MM_CORESIGHT_SOC_STM    0xfe9c0000
#define MM_CORESIGHT_SOC_FTM    0xfe9d0000
#define MM_CORESIGHT_SOC_ATM_0  0xfe9e0000
#define MM_CORESIGHT_SOC_ATM_1  0xfe9f0000
#define MM_CORESIGHT_R5_ROM     0xfebe0000
#define MM_CORESIGHT_R5_DBG_0   0xfebf0000
#define MM_CORESIGHT_R5_PMU_0   0xfebf1000
#define MM_CORESIGHT_R5_DBG_1   0xfebf2000
#define MM_CORESIGHT_R5_PMU_1   0xfebf3000
#define MM_CORESIGHT_R5_CTI_0   0xfebf8000
#define MM_CORESIGHT_R5_CTI_1   0xfebf9000
#define MM_CORESIGHT_R5_ETM_0   0xfebfc000
#define MM_CORESIGHT_R5_ETM_1   0xfebfd000
#define MM_CORESIGHT_A53_ROM    0xfec00000
#define MM_CORESIGHT_A53_DBG_0  0xfec10000
#define MM_CORESIGHT_A53_CTI_0  0xfec20000
#define MM_CORESIGHT_A53_PMU_0  0xfec30000
#define MM_CORESIGHT_A53_ETM_0  0xfec40000
#define MM_CORESIGHT_A53_DBG_1  0xfed10000
#define MM_CORESIGHT_A53_CTI_1  0xfed20000
#define MM_CORESIGHT_A53_PMU_1  0xfed30000
#define MM_CORESIGHT_A53_ETM_1  0xfed40000
#define MM_CORESIGHT_A53_DBG_2  0xfee10000
#define MM_CORESIGHT_A53_CTI_2  0xfee20000
#define MM_CORESIGHT_A53_PMU_2  0xfee30000
#define MM_CORESIGHT_A53_ETM_2  0xfee40000
#define MM_CORESIGHT_A53_DBG_3  0xfef10000
#define MM_CORESIGHT_A53_CTI_3  0xfef20000
#define MM_CORESIGHT_A53_PMU_3  0xfef30000

#define MM_DDRSS	0xfd000000
#define MM_SATA_AHCI_HBA	0xfd0c0000
#define MM_SATA_AHCI_VENDOR	0xfd0c00a0
#define MM_SATA_AHCI_PORT0_CNTRL	0xfd0c0100
#define MM_SATA_AHCI_PORT1_CNTRL	0xfd0c0180
#define MM_AXIPCIE_MAIN	0xfd0e0000
#define MM_AXIPCIE_INGRESS0	0xfd0e0800
#define MM_AXIPCIE_INGRESS1	0xfd0e0820
#define MM_AXIPCIE_INGRESS2	0xfd0e0840
#define MM_AXIPCIE_INGRESS3	0xfd0e0860
#define MM_AXIPCIE_INGRESS4	0xfd0e0880
#define MM_AXIPCIE_INGRESS5	0xfd0e08a0
#define MM_AXIPCIE_INGRESS6	0xfd0e08c0
#define MM_AXIPCIE_INGRESS7	0xfd0e08e0
#define MM_AXIPCIE_EGRESS0	0xfd0e0c00
#define MM_AXIPCIE_EGRESS1	0xfd0e0c20
#define MM_AXIPCIE_EGRESS2	0xfd0e0c40
#define MM_AXIPCIE_EGRESS3	0xfd0e0c60
#define MM_AXIPCIE_EGRESS4	0xfd0e0c80
#define MM_AXIPCIE_EGRESS5	0xfd0e0ca0
#define MM_AXIPCIE_EGRESS6	0xfd0e0cc0
#define MM_AXIPCIE_EGRESS7	0xfd0e0ce0
#define MM_AXIPCIE_DMA0	0xfd0f0000
#define MM_AXIPCIE_DMA1	0xfd0f0080
#define MM_AXIPCIE_DMA2	0xfd0f0100
#define MM_AXIPCIE_DMA3	0xfd0f0180
#define MM_AXIPCIE_MSIX_TABLE	0xfd0f1000
#define MM_AXIPCIE_MSIX_PBA	0xfd0f2000
#define MM_CRF_APB	0xfd1a0000
#define MM_AFIFM0	0xfd360000
#define MM_AFIFM1	0xfd370000
#define MM_AFIFM2	0xfd380000
#define MM_AFIFM3	0xfd390000
#define MM_AFIFM4	0xfd3a0000
#define MM_AFIFM5	0xfd3b0000
#define MM_SIOU	0xfd3d0000
#define MM_SERDES	0xfd400000
#define MM_PCIE_ATTRIB	0xfd480000
#define MM_APM_CCI_INTC	0xfd490000
#define MM_DP	0xfd4a0000
#define MM_GPU	0xfd4b0000
#define MM_DPDMA	0xfd4c0000
#define MM_WDT	0xfd4d0000
#define MM_FPD_XMPU_SINK	0xfd4f0000
#define MM_GDMA_CH0	0xfd500000
#define MM_GDMA_CH1	0xfd510000
#define MM_GDMA_CH2	0xfd520000
#define MM_GDMA_CH3	0xfd530000
#define MM_GDMA_CH4	0xfd540000
#define MM_GDMA_CH5	0xfd550000
#define MM_GDMA_CH6	0xfd560000
#define MM_GDMA_CH7	0xfd570000
#define MM_APU	0xfd5c0000
#define MM_FPD_XMPU_CFG	0xfd5d0000
#define MM_CCI_REG	0xfd5e0000
#define MM_SMMU_REG	0xfd5f0000
#define MM_FPD_SLCR	0xfd610000
#define MM_FPD_SLCR_SECURE	0xfd690000
#define MM_CCI_GPV	0xfd6e0000
#define MM_FPD_GPV	0xfd700000

#define MM_QSPI_Linear_Address	0xc0000000
#define MM_UART0	0xff000000
#define MM_UART1	0xff010000
#define MM_I2C0	0xff020000
#define MM_I2C1	0xff030000
#define MM_SPI0	0xff040000
#define MM_SPI1	0xff050000
#define MM_CAN0	0xff060000
#define MM_CAN1	0xff070000
#define MM_GPIO	0xff0a0000
#define MM_GEM0	0xff0b0000
#define MM_GEM1	0xff0c0000
#define MM_GEM2	0xff0d0000
#define MM_GEM3	0xff0e0000
#define MM_QSPI	0xff0f0000
#define MM_NAND	0xff100000
#define MM_TTC0	0xff110000
#define MM_TTC1	0xff120000
#define MM_TTC2	0xff130000
#define MM_TTC3	0xff140000
#define MM_SWDT	0xff150000
#define MM_SD0	0xff160000
#define MM_SD1	0xff170000
#define MM_IOU_SLCR	0xff180000
#define MM_IOU_SECURE_SLCR	0xff240000
#define MM_IOU_SCNTR	0xff250000

#define MM_alg_vcu_enc_top	0xa0000000
#define MM_alg_vcu_dec_top	0xa0020000

#define MM_PMU_GLOBAL           0xffd80000
#define MM_CSU                  0xffca0000

#define MM_TCM_0_A 0xffe00000
#define MM_TCM_0_B 0xffe20000
#define MM_TCM_1_A 0xffe90000
#define MM_TCM_1_B 0xffeb0000

/* Selected set of register definitions:  */
#define R_CRF_APLL_CTRL           0x20
#define R_CRF_ACPU_CTRL           0x60
#define R_CRF_DP_VIDEO_REF_CTRL   0x70
#define R_CRF_DP_AUDIO_REF_CTRL   0x74
#define R_CRF_DP_STC_REF_CTRL     0x7c
#define R_CRF_GPU_REF_CTRL        0x84
#define R_CRF_SATA_REF_CTRL       0xa0
#define R_CRF_PCIE_REF_CTRL       0xb4
#define R_CRF_GDMA_REF_CTRL       0xb8
#define R_CRF_DPDMA_REF_CTRL      0xbc

#define R_CRL_IOPLL_CTRL          0x20
#define R_CRL_IOPLL_CFG           0x24
#define R_CRL_IOPLL_FRAC_CFG      0x28
#define R_CRL_RPLL_CTRL           0x30
#define R_CRL_RPLL_CFG            0x34
#define R_CRL_RPLL_FRAC_CFG       0x38
#define R_CRL_PLL_STATUS          0x40
#define R_CRL_IOPLL_TO_FPD_CTRL   0x44
#define R_CRL_RPLL_TO_FPD_CTRL    0x48
#define R_CRL_USB3_DUAL_REF_CTRL  0x4c
#define R_CRL_GEM0_REF_CTRL       0x50
#define R_CRL_GEM1_REF_CTRL       0x54
#define R_CRL_GEM2_REF_CTRL       0x58
#define R_CRL_GEM3_REF_CTRL       0x5c
#define R_CRL_USB0_BUS_REF_CTRL   0x60
#define R_CRL_USB1_BUS_REF_CTRL   0x64
#define R_CRL_QSPI_REF_CTRL       0x68
#define R_CRL_SDIO0_REF_CTRL      0x6c
#define R_CRL_SDIO1_REF_CTRL      0x70
#define R_CRL_UART0_REF_CTRL      0x74
#define R_CRL_UART1_REF_CTRL      0x78
#define R_CRL_SPI0_REF_CTRL       0x7c
#define R_CRL_SPI1_REF_CTRL       0x80
#define R_CRL_CAN0_REF_CTRL       0x84
#define R_CRL_CAN1_REF_CTRL       0x88
#define R_CRL_CPU_R5_CTRL         0x90
#define R_CRL_IOU_SWITCH_CTRL     0x9c
#define R_CRL_CSU_PLL_CTRL        0xa0
#define R_CRL_PCAP_CTRL           0xa4
#define R_CRL_LPD_SWITCH_CTRL     0xa8
#define R_CRL_LPD_LSBUS_CTRL      0xac
#define R_CRL_DBG_LPD_CTRL        0xb0
#define R_CRL_NAND_REF_CTRL       0xb4
#define R_CRL_ADMA_REF_CTRL       0xb8
#define R_CRL_PL0_REF_CTRL        0xc0
#define R_CRL_PL1_REF_CTRL        0xc4
#define R_CRL_PL2_REF_CTRL        0xc8
#define R_CRL_PL3_REF_CTRL        0xcc
#define R_CRL_PL0_THR_CTRL        0xd0
#define R_CRL_PL0_THR_CNT         0xd4
#define R_CRL_PL1_THR_CTRL        0xd8
#define R_CRL_PL1_THR_CNT         0xdc
#define R_CRL_PL2_THR_CTRL        0xe0
#define R_CRL_PL2_THR_CNT         0xe4
#define R_CRL_PL3_THR_CTRL        0xe8
#define R_CRL_PL3_THR_CNT         0xfc
#define R_CRL_GEM_TSU_REF_CTRL    0x100
#define R_CRL_DLL_REF_CTRL        0x104
#define R_CRL_AMS_REF_CTRL        0x108
#define R_CRL_I2C0_REF_CTRL       0x120
#define R_CRL_I2C1_REF_CTRL       0x124
#define R_CRL_TIMESTAMP_REF_CTRL  0x128

#define R_PMU_GLOBAL_GLOBAL_GEN_STORAGE0    0x30
#define R_PMU_GLOBAL_PERS_GLOB_GEN_STORAGE7 0x6c

#define R_PMU_GLOBAL_PWR_STATE              0x100

#define R_CSU_IDCODE                        0x40

#define R_IOU_SLCR_MIO_PIN_0              0x0
#define R_IOU_SLCR_MIO_MST_TRI2           0x20c
#define R_IOU_SLCR_WDT_CLK_SEL            0x300
#define R_IOU_SLCR_CAN_MIO_CTRL           0x304
#define R_IOU_SLCR_GEM_CLK_CTRL           0x308
#define R_IOU_SLCR_SDIO_CLK_CTRL          0x30c
#define R_IOU_SLCR_CTRL_REG_SD	          0x310
#define R_IOU_SLCR_SD_ITAPDLY	          0x314
#define R_IOU_SLCR_SD_OTAPDLYSEL          0x318
#define R_IOU_SLCR_SD_CONFIG_REG1         0x31c
#define R_IOU_SLCR_SD_CONFIG_REG2         0x320
#define R_IOU_SLCR_SD_CONFIG_REG3         0x324
#define R_IOU_SLCR_SD_INITPRESET          0x328
#define R_IOU_SLCR_SD_DSPPRESET	          0x32c
#define R_IOU_SLCR_SD_HSPDPRESET          0x330
#define R_IOU_SLCR_SD_SDR12PRESET         0x334
#define R_IOU_SLCR_SD_SDR25PRESET         0x338
#define R_IOU_SLCR_SD_SDR50PRSET          0x33c
#define R_IOU_SLCR_SD_SDR104PRST          0x340
#define R_IOU_SLCR_SD_DDR50PRESET         0x344
#define R_IOU_SLCR_SD_MAXCUR1P8           0x34c
#define R_IOU_SLCR_SD_MAXCUR3P0           0x350
#define R_IOU_SLCR_SD_MAXCUR3P3           0x354
#define R_IOU_SLCR_SD_DLL_CTRL            0x358
#define R_IOU_SLCR_SD_CDN_CTRL            0x35c
#define R_IOU_SLCR_GEM_CTRL               0x360
#define R_IOU_SLCR_IOU_TTC_APB_CLK        0x380
#define R_IOU_SLCR_IOU_TAPDLY_BYPASS      0x390
#define R_IOU_SLCR_IOU_COHERENT_CTRL      0x400
#define R_IOU_SLCR_VIDEO_PSS_CLK_SEL      0x404
#define R_IOU_SLCR_IOU_INTERCONNECT_ROUTE 0x408
#define R_IOU_SLCR_IOU_RAM_GEM0           0x500
#define R_IOU_SLCR_IOU_RAM_GEM1           0x504
#define R_IOU_SLCR_IOU_RAM_GEM2           0x508
#define R_IOU_SLCR_IOU_RAM_GEM3           0x50c
#define R_IOU_SLCR_IOU_RAM_SD0            0x510
#define R_IOU_SLCR_IOU_RAM_SD1            0x514
#define R_IOU_SLCR_IOU_RAM_CAN0           0x518
#define R_IOU_SLCR_IOU_RAM_CAN1           0x51c
#define R_IOU_SLCR_IOU_RAM_LQSPI          0x520
#define R_IOU_SLCR_IOU_RAM_NAND           0x524