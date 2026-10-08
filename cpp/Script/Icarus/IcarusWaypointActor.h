// /Script/Icarus.IcarusWaypointActor
// Derives from: AActor > UObject
// size 0x220, declared in Icarus/Source/Icarus/UI/Map/IcarusWaypointActor.h

UCLASS(Config=Engine)
class AIcarusWaypointActor : public AActor
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) AIcarusPlayerState* GetOwningPlayerState() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitForPlayer(AIcarusPlayerState* OwningPlayerState);  // parameters 0x8
};
