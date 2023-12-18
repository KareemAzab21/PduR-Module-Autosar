/******************************************************************************
 *
 * Module: PduR
 *
 * File Name: PduR_Pbcfg.c
 *
 * Description: Source file for Post Build Configurations Parameter for PduR Module.
 *
 * Author: Kareem Azab / Alyeldeen Khaled
 ******************************************************************************/






/******************************************************************************************************************************/
/******************************************************************************************************************************
 **                                                     Includes                                                             **
 ******************************************************************************************************************************/
 #include "PduR.h"

 /*****************************************************************************************************************************
  **                      					Post-Build Configuration variables values                                       **
  *****************************************************************************************************************************/
const PduR_PBConfigType PduR =
{
    .PduRRoutingTables =
    {
        .PduRRoutingTable =
        {
            // First Routing Table
            {
                .PduRRoutingPath =
                {
                    // First Routing Path in the First Routing Table
                    {
                        .PduRDestPdu =
                        {
                            {
                                .PduRDestPduDataProvision = PDUR_DIRECT,
                                .PduRDestPduHandleId = 0,
                                .PduRTransmissionConfirmation = TRUE
                            }
                        },
                        .PduRSrcPdu =
                        {
                            .PduRSourcePduHandleId = 0,
                            .PduRSrcPduUpTxConf = TRUE
                        }
                    }
                }
            },
            // Second Routing Table
            {
                .PduRRoutingPath =
                {
                    // First Routing Path in the Second Routing Table
                    {
                        .PduRDestPdu =
                        {
                            {
                                .PduRDestPduDataProvision = PDUR_DIRECT,
                                .PduRDestPduHandleId = 1,
                                .PduRTransmissionConfirmation = TRUE
                            }
                        },
                        .PduRSrcPdu =
                        {
                            .PduRSourcePduHandleId = 1,
                            .PduRSrcPduUpTxConf = TRUE
                        }
                    }
                }
            }
        }
    }
};









