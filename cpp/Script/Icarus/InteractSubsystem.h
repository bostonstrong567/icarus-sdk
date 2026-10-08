// /Script/Icarus.InteractSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x40, declared in Icarus/Source/Icarus/IcarusGenerated/Subsystems/InteractSubsystem.h

UCLASS()
class UInteractSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FWaterSourceInteractNotifySignature OnWaterSourceInteractNotify;  // 0x0030, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastWaterSourceInteractDelegate(AIcarusPlayerCharacter* Player, AIcarusActor* WaterSource);  // parameters 0x10
};
