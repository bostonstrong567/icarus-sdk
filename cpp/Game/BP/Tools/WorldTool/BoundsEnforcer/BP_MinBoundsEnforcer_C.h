// /Game/BP/Tools/WorldTool/BoundsEnforcer/BP_MinBoundsEnforcer.BP_MinBoundsEnforcer_C
// Derives from: AActor > UObject
// size 0x244, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MinBoundsEnforcer_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* Box;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBoxSphereBounds Bounds;  // 0x0228, size 0x1C

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
