// /Script/Icarus.CreatureSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0xE0, declared in Icarus/Source/Icarus/IcarusGenerated/Subsystems/CreatureSubsystem.h

UCLASS()
class UCreatureSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FCreatureKilledNotifySignature OnCreatureKilledNotify;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FCreatureSkinnedNotifySignature OnCreatureSkinnedNotify;  // 0x0040, size 0x10
    UPROPERTY(BlueprintAssignable) FCorpseItemRemovedNotifySignature OnCorpseItemRemovedNotify;  // 0x0050, size 0x10
    UPROPERTY(BlueprintAssignable) FCreatureTamedNotifySignature OnCreatureTamedNotify;  // 0x0060, size 0x10
    UPROPERTY(BlueprintAssignable) FCreatureStartedTamingNotifySignature OnCreatureStartedTamingNotify;  // 0x0070, size 0x10
    UPROPERTY(BlueprintAssignable) FCreatureScannedNotifySignature OnCreatureScannedNotify;  // 0x0080, size 0x10
    UPROPERTY(BlueprintAssignable) FArmorBrokenNotifySignature OnArmorBrokenNotify;  // 0x0090, size 0x10
    UPROPERTY(BlueprintAssignable) FTamedCreatureClaimedNotifySignature OnTamedCreatureClaimedNotify;  // 0x00A0, size 0x10
    UPROPERTY(BlueprintAssignable) FTamedCreatureLevelUpdatedNotifySignature OnTamedCreatureLevelUpdatedNotify;  // 0x00B0, size 0x10
    UPROPERTY(BlueprintAssignable) FTamedCreatureSpawnedFromPodNotifySignature OnTamedCreatureSpawnedFromPodNotify;  // 0x00C0, size 0x10
    UPROPERTY(BlueprintAssignable) FCreatureGrownUpNotifySignature OnCreatureGrownUpNotify;  // 0x00D0, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastArmorBrokenDelegate(AActor* Creature, FIcarusDamagePacket DamagePacket);  // parameters 0xE0
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastCorpseItemRemovedDelegate(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastCreatureGrownUpDelegate(AIcarusMountCharacter* Adult, AIcarusNPCGOAPCharacter* Juvenile);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastCreatureKilledDelegate(AIcarusPlayerCharacter* Player, AIcarusActor* Causer, AActor* Creature, APawn* KillingBlowFromPawn);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastCreatureScannedDelegate(AIcarusPlayerCharacter* Player, AActor* Creature);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastCreatureSkinnedDelegate(AIcarusPlayerCharacter* Player, AIcarusCorpse* Corpse);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastCreatureStartedTamingDelegate(UIcarusTamingComponent* TamingComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastCreatureTamedDelegate(AIcarusMountCharacter* TamedMount, UIcarusTamingComponent* TamingComponent);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastTamedCreatureClaimedDelegate(AIcarusPlayerCharacter* Player, AIcarusMountCharacter* TamedCreature);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastTamedCreatureLevelUpdatedDelegate(AIcarusMountCharacter* Creature, int32 CurrentLevel);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastTamedCreatureSpawnedFromPodDelegate(AIcarusMountCharacter* Creature);  // parameters 0x8
};
