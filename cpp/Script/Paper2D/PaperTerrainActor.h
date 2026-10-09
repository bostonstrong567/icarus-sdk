// /Script/Paper2D.PaperTerrainActor
// Derives from: AActor > UObject
// size 0x238, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperTerrainActor.h

UCLASS(Config=Engine)
class APaperTerrainActor : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Instanced) USceneComponent* DummyRoot;  // 0x0220, size 0x8
    UPROPERTY(Instanced) UPaperTerrainSplineComponent* SplineComponent;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UPaperTerrainComponent* RenderComponent;  // 0x0230, size 0x8
};
