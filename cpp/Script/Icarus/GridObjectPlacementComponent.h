// /Script/Icarus.GridObjectPlacementComponent
// Derives from: UActorComponent > UObject
// size 0x108, declared in Icarus/Source/Icarus/Systems/GridObjectPlacementComponent.h

UCLASS(Abstract, Config=Engine)
class UGridObjectPlacementComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GridUnitSize;  // 0x00B0, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TMap<FIntVector,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntVector,TWeakObjectPtr<AActor,FWeakObjectPtr>,0> > ObjectGridMap;  // 0x00B8, protected

    UFUNCTION(BlueprintCallable) void AddLocation(const FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) AActor* AddObject(const FVector& GridCenter, const FVector& GridSize);  // parameters 0x20
};
