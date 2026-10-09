// /Script/Icarus.PlayerLandingPadSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x40, declared in Icarus/Source/Icarus/Systems/Deployables/PlayerLandingPadSubsystem.h

UCLASS()
class UPlayerLandingPadSubsystem : public UWorldSubsystem
{
private:
    TArray<TWeakObjectPtr<AIcarusActor,FWeakObjectPtr>,TSizedDefaultAllocator<32> > PlayerLandingPads;  // 0x0030, not reflected
public:
    UFUNCTION(BlueprintCallable) AIcarusActor* FindNearbyLandingPad(AIcarusPlayerCharacter* Player, float MaxDistance, FVector& LocationOut);  // parameters 0x20
    UFUNCTION(BlueprintCallable) AIcarusActor* GetAssignedLandingPad(AIcarusPlayerCharacter* Player);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void PlayerDeparted(AIcarusPlayerCharacter* PlayerCharacter);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RegisterLandingPad(AIcarusActor* LandingPad);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static bool ShouldWeEden(UObject* WorldContext);  // parameters 0x9
    UFUNCTION(BlueprintCallable) AIcarusActor* TryFindPlayerLandingPad(AIcarusPlayerCharacter* Player);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UnRegisterLandingPad(AIcarusActor* LandingPad);  // parameters 0x8
};
