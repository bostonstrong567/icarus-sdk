// /Script/Icarus.BuildingSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x60, declared in Icarus/Source/Icarus/IcarusGenerated/Subsystems/BuildingSubsystem.h

UCLASS()
class UBuildingSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FBuildingPiecePlacedNotifySignature OnBuildingPiecePlacedNotify;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FBuildingPieceRemovedNotifySignature OnBuildingPieceRemovedNotify;  // 0x0040, size 0x10
    UPROPERTY(BlueprintAssignable) FBuildingPieceRepairedNotifySignature OnBuildingPieceRepairedNotify;  // 0x0050, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastBuildingPiecePlacedDelegate(AIcarusPlayerCharacter* Player, ABuildingBase* Building);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastBuildingPieceRemovedDelegate(AIcarusPlayerCharacter* Player, ABuildingBase* Building);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastBuildingPieceRepairedDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
};
