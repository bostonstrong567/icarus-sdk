// /Script/Icarus.PlayerSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x240, declared in Icarus/Source/Icarus/IcarusGenerated/Subsystems/PlayerSubsystem.h

UCLASS()
class UPlayerSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FItemAddedNotifySignature OnItemAddedNotify;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FSuitSlotUpdatedNotifySignature OnSuitSlotUpdatedNotify;  // 0x0040, size 0x10
    UPROPERTY(BlueprintAssignable) FItemShiftedNotifySignature OnItemShiftedNotify;  // 0x0050, size 0x10
    UPROPERTY(BlueprintAssignable) FItemConsumedNotifySignature OnItemConsumedNotify;  // 0x0060, size 0x10
    UPROPERTY(BlueprintAssignable) FEnteredWaterNotifySignature OnEnteredWaterNotify;  // 0x0070, size 0x10
    UPROPERTY(BlueprintAssignable) FPrepareLoadoutNotifySignature OnPrepareLoadoutNotify;  // 0x0080, size 0x10
    UPROPERTY(BlueprintAssignable) FBiomeUpdatedNotifySignature OnBiomeUpdatedNotify;  // 0x0090, size 0x10
    UPROPERTY(BlueprintAssignable) FLevelUpdatedNotifySignature OnLevelUpdatedNotify;  // 0x00A0, size 0x10
    UPROPERTY(BlueprintAssignable) FTimeSurvivedNotifySignature OnTimeSurvivedNotify;  // 0x00B0, size 0x10
    UPROPERTY(BlueprintAssignable) FLocalTimeSurvivedNotifySignature OnLocalTimeSurvivedNotify;  // 0x00C0, size 0x10
    UPROPERTY(BlueprintAssignable) FDistanceTraveledNotifySignature OnDistanceTraveledNotify;  // 0x00D0, size 0x10
    UPROPERTY(BlueprintAssignable) FItemCraftedNotifySignature OnItemCraftedNotify;  // 0x00E0, size 0x10
    UPROPERTY(BlueprintAssignable) FItemAlteredNotifySignature OnItemAlteredNotify;  // 0x00F0, size 0x10
    UPROPERTY(BlueprintAssignable) FPlayerIgnitedBuildingPieceNotifySignature OnPlayerIgnitedBuildingPieceNotify;  // 0x0100, size 0x10
    UPROPERTY(BlueprintAssignable) FFireExtinguishedNotifySignature OnFireExtinguishedNotify;  // 0x0110, size 0x10
    UPROPERTY(BlueprintAssignable) FPlayerDownedNotifySignature OnPlayerDownedNotify;  // 0x0120, size 0x10
    UPROPERTY(BlueprintAssignable) FPlayerRespawnedNotifySignature OnPlayerRespawnedNotify;  // 0x0130, size 0x10
    UPROPERTY(BlueprintAssignable) FPlayerRevivedNotifySignature OnPlayerRevivedNotify;  // 0x0140, size 0x10
    UPROPERTY(BlueprintAssignable) FOtherPlayerRevivedNotifySignature OnOtherPlayerRevivedNotify;  // 0x0150, size 0x10
    UPROPERTY(BlueprintAssignable) FShieldResistNotifySignature OnShieldResistNotify;  // 0x0160, size 0x10
    UPROPERTY(BlueprintAssignable) FFallDamageAppliedNotifySignature OnFallDamageAppliedNotify;  // 0x0170, size 0x10
    UPROPERTY(BlueprintAssignable) FStruckByLightningNotifySignature OnStruckByLightningNotify;  // 0x0180, size 0x10
    UPROPERTY(BlueprintAssignable) FPlayerEquipmentChangedNotifySignature OnPlayerEquipmentChangedNotify;  // 0x0190, size 0x10
    UPROPERTY(BlueprintAssignable) FPlayerEarnedCurrencyNotifySignature OnPlayerEarnedCurrencyNotify;  // 0x01A0, size 0x10
    UPROPERTY(BlueprintAssignable) FPlayerCaughtFishNotifySignature OnPlayerCaughtFishNotify;  // 0x01B0, size 0x10
    UPROPERTY(BlueprintAssignable) FPlayerBestiaryUnlockedNotifySignature OnPlayerBestiaryUnlockedNotify;  // 0x01C0, size 0x10
    UPROPERTY(BlueprintAssignable) FPlayerBestiaryMaxRankNotifySignature OnPlayerBestiaryMaxRankNotify;  // 0x01D0, size 0x10
    UPROPERTY(BlueprintAssignable) FPlayerCompletedDynamicMissionNotifySignature OnPlayerCompletedDynamicMissionNotify;  // 0x01E0, size 0x10
    UPROPERTY(BlueprintAssignable) FLivingItemSlotUnlockedNotifySignature OnLivingItemSlotUnlockedNotify;  // 0x01F0, size 0x10
    UPROPERTY(BlueprintAssignable) FPlayerModifierUpdatedNotifySignature OnPlayerModifierUpdatedNotify;  // 0x0200, size 0x10
    UPROPERTY(BlueprintAssignable) FSledgehammerBreakNotifySignature OnSledgehammerBreakNotify;  // 0x0210, size 0x10
    UPROPERTY(BlueprintAssignable) FWorkshopPurchaseNotifySignature OnWorkshopPurchaseNotify;  // 0x0220, size 0x10
    UPROPERTY(BlueprintAssignable) FRespawnPodNotifySignature OnRespawnPodNotify;  // 0x0230, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastBiomeUpdatedDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastDistanceTraveledDelegate(AIcarusPlayerCharacter* Player, int32 Distance, EProspectLocation Biome);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastEnteredWaterDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastFallDamageAppliedDelegate(AIcarusCharacter* Player, int32 Amount);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastFireExtinguishedDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastItemAddedDelegate(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastItemAlteredDelegate(AIcarusPlayerCharacter* Player, FItemData Item, FIcarusAttachmentsRowHandle Attachment);  // parameters 0x210
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastItemConsumedDelegate(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastItemCraftedDelegate(AIcarusPlayerCharacter* Player, FItemData Item, FProcessorRecipesRowHandle RecipeRow);  // parameters 0x210
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastItemShiftedDelegate(AIcarusPlayerCharacter* Player, UInventory* SourceInventory, int32 SourceLocation, UInventory* DestinationInventory, int32 DestinationLocation, int32 Amount);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastLevelUpdatedDelegate(AIcarusPlayerCharacter* Player, int32 CurrentLevel);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastLivingItemSlotUnlockedDelegate(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastLocalTimeSurvivedDelegate(AIcarusPlayerCharacter* Player, int32 SecondsSurvived, EProspectLocation Biome);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastOtherPlayerRevivedDelegate(AIcarusPlayerCharacter* Player, AIcarusPlayerCharacter* OtherPlayer);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastPlayerBestiaryMaxRankDelegate(AIcarusPlayerCharacter* Player, FBestiaryDataRowHandle BestiaryGroup);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastPlayerBestiaryUnlockedDelegate(AIcarusPlayerCharacter* Player, FBestiaryDataRowHandle BestiaryGroup);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastPlayerCaughtFishDelegate(AIcarusPlayerCharacter* Player, FFishDataRowHandle FishType);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastPlayerCompletedDynamicMissionDelegate(AIcarusPlayerCharacter* Player, FFactionMissionsRowHandle FactionMission);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastPlayerDownedDelegate(AIcarusPlayerCharacter* Player, FIcarusDamagePacket LastDamagePacket);  // parameters 0xE0
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastPlayerEarnedCurrencyDelegate(AIcarusPlayerCharacter* Player, FMetaCurrencyRowHandle Currency, int32 Amount);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastPlayerEquipmentChangedDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastPlayerIgnitedBuildingPieceDelegate(AIcarusPlayerCharacter* Player, ABuildingBase* Building);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastPlayerModifierUpdatedDelegate(AIcarusPlayerCharacter* Player, FModifierStatesRowHandle Modifier, bool WasRemoved);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastPlayerRespawnedDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastPlayerRevivedDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastPrepareLoadoutDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastRespawnPodDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastShieldResistDelegate(AIcarusPlayerCharacter* Player, FIcarusDamagePacket LastDamagePacket);  // parameters 0xE0
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastSledgehammerBreakDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastStruckByLightningDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastSuitSlotUpdatedDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastTimeSurvivedDelegate(AIcarusPlayerCharacter* Player, int32 SecondsSurvived, EProspectLocation Biome);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastWorkshopPurchaseDelegate(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
};
