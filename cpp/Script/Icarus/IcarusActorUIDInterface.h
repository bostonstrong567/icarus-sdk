// /Script/Icarus.IcarusActorUIDInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Actors/IcarusActorUIDInterface.h

UCLASS(Abstract, MinimalAPI)
class UIcarusActorUIDInterface : public UInterface
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetIcarusUID() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetIcarusUID(int32 UID);  // parameters 0x4
};
