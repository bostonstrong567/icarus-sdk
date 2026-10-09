// /Script/OnlineSubsystemIcarus.IcarusConnectionComponentGen
// Derives from: UIcarusConnectionComponentBase > UObject
// size 0x5F8, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/Connection/IcarusConnectionComponentGen.h

UCLASS()
class UIcarusConnectionComponentGen : public UIcarusConnectionComponentBase
{
public:
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResGetUserProfileDelegate;  // 0x01D8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResUnlockAccountFlagsDelegate;  // 0x01E8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResCreateCharacterDelegate;  // 0x01F8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResGetCharactersDelegate;  // 0x0208, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResGetCharacterProfileDelegate;  // 0x0218, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResUnlockCharacterFlagsDelegate;  // 0x0228, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResUpdateCharacterProgressDelegate;  // 0x0238, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResDeleteCharacterDelegate;  // 0x0248, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResResetCharacterDelegate;  // 0x0258, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResUpdateCosmeticsDelegate;  // 0x0268, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResGetAvailableProspectsDelegate;  // 0x0278, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResGenerateProspectsDelegate;  // 0x0288, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResClaimProspectDelegate;  // 0x0298, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResSettleProspectDelegate;  // 0x02A8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResSetResourceSplitDelegate;  // 0x02B8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResCanJoinProspectDelegate;  // 0x02C8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResJoinProspectDelegate;  // 0x02D8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResCheckProspectExpiredDelegate;  // 0x02E8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResResetCharacterProspectStateDelegate;  // 0x02F8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResUpdateCharacterProspectLocationDelegate;  // 0x0308, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResProspectExpiredDelegate;  // 0x0318, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResAbandonProspectDelegate;  // 0x0328, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResGetNotificationsDelegate;  // 0x0338, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResReadNotificationDelegate;  // 0x0348, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResClaimNotificationAttachmentsDelegate;  // 0x0358, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResDeleteNotificationDelegate;  // 0x0368, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResGetLastProspectDelegate;  // 0x0378, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResGetProspectReportDelegate;  // 0x0388, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResGetProspectSummaryDelegate;  // 0x0398, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResUpdateTrackedStatsDelegate;  // 0x03A8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResUpdateFactionMissionProgressDelegate;  // 0x03B8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResGetChallengesDelegate;  // 0x03C8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResUpdateChallengeProgressDelegate;  // 0x03D8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResGetMetaInventoryDelegate;  // 0x03E8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResMoveMetaInventoryItemDelegate;  // 0x03F8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResRemoveMetaItemDelegate;  // 0x0408, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResGetMetaResourceDelegate;  // 0x0418, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResGetCreditsDelegate;  // 0x0428, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResExchangeCurrencyDelegate;  // 0x0438, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResUnlockWorkshopItemDelegate;  // 0x0448, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResReplicateWorkshopItemDelegate;  // 0x0458, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResRepairWorkshopItemDelegate;  // 0x0468, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResSyncCharacterTalentsDelegate;  // 0x0478, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResSyncAccountTalentsDelegate;  // 0x0488, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResTalentRefundDelegate;  // 0x0498, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResSyncAccountFlagsDelegate;  // 0x04A8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResCreateDropshipDelegate;  // 0x04B8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResDeleteDropshipDelegate;  // 0x04C8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResModifyDropshipDelegate;  // 0x04D8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResGetDropshipsDelegate;  // 0x04E8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResSelectEnvirosuitDelegate;  // 0x04F8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResRemoveEnvirosuitDelegate;  // 0x0508, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResGetPreparedLoadoutDelegate;  // 0x0518, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResGetLoadoutInventoryDelegate;  // 0x0528, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResSelectDropshipDelegate;  // 0x0538, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResRemoveSelectedDropshipDelegate;  // 0x0548, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResPackageLoadoutDelegate;  // 0x0558, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResUnpackageLoadoutDelegate;  // 0x0568, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResGetAllProspectsDelegate;  // 0x0578, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResGetProspectDelegate;  // 0x0588, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResUpdateProspectDelegate;  // 0x0598, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResResumeProspectDelegate;  // 0x05A8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResHostCandidateDelegate;  // 0x05B8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResBackToHabDelegate;  // 0x05C8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResGetCharacterLoadoutDelegate;  // 0x05D8, not reflected
    TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResUpdateCharacterLoadoutDelegate;  // 0x05E8, not reflected
};
