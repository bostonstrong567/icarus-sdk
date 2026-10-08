// /Script/Icarus.DropShipSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x70, declared in Icarus/Source/Icarus/IcarusGenerated/Subsystems/DropShipSubsystem.h

UCLASS()
class UDropShipSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FDropShipInteractNotifySignature OnDropShipInteractNotify;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FDropShipEnterNotifySignature OnDropShipEnterNotify;  // 0x0040, size 0x10
    UPROPERTY(BlueprintAssignable) FDropShipExitNotifySignature OnDropShipExitNotify;  // 0x0050, size 0x10
    UPROPERTY(BlueprintAssignable) FDropShipLaunchNotifySignature OnDropShipLaunchNotify;  // 0x0060, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastDropShipEnterDelegate(AIcarusPlayerCharacter* Player, AIcarusRocket* DropShip);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastDropShipExitDelegate(AIcarusPlayerCharacter* Player, AIcarusRocket* DropShip);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastDropShipInteractDelegate(AIcarusPlayerCharacter* Player, AIcarusRocket* DropShip);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastDropShipLaunchDelegate(AIcarusRocket* DropShip);  // parameters 0x8
};
