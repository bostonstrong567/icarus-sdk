// /Script/Icarus.DeployableSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0xC0, declared in Icarus/Source/Icarus/IcarusGenerated/Subsystems/DeployableSubsystem.h

UCLASS()
class UDeployableSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FDeployNotifySignature OnDeployNotify;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FGeneratorActivatedNotifySignature OnGeneratorActivatedNotify;  // 0x0040, size 0x10
    UPROPERTY(BlueprintAssignable) FGeneratorDeactivatedNotifySignature OnGeneratorDeactivatedNotify;  // 0x0050, size 0x10
    UPROPERTY(BlueprintAssignable) FFactionDeployableActivatedNotifySignature OnFactionDeployableActivatedNotify;  // 0x0060, size 0x10
    UPROPERTY(BlueprintAssignable) FDeployableInteractedNotifySignature OnDeployableInteractedNotify;  // 0x0070, size 0x10
    UPROPERTY(BlueprintAssignable) FDeployablePickedUpNotifySignature OnDeployablePickedUpNotify;  // 0x0080, size 0x10
    UPROPERTY(BlueprintAssignable) FDeployableDestroyedNotifySignature OnDeployableDestroyedNotify;  // 0x0090, size 0x10
    UPROPERTY(BlueprintAssignable) FThumperActivatedNotifySignature OnThumperActivatedNotify;  // 0x00A0, size 0x10
    UPROPERTY(BlueprintAssignable) FThumperEventCompletedNotifySignature OnThumperEventCompletedNotify;  // 0x00B0, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastDeployDelegate(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastDeployableDestroyedDelegate(ADeployable* Deployable, FIcarusDamagePacket LastDamagePacket, AIcarusPlayerCharacter* InstigatingPlayer);  // parameters 0xE8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastDeployableInteractedDelegate(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastDeployablePickedUpDelegate(AIcarusPlayerCharacter* Player, ADeployable* Deployable);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastFactionDeployableActivatedDelegate(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastGeneratorActivatedDelegate(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastGeneratorDeactivatedDelegate(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastThumperActivatedDelegate(ADeployable* Thumper);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastThumperEventCompletedDelegate(ADeployable* Thumper, int32 OresRegenerated, int32 VoxelsRegenerated);  // parameters 0x10
};
