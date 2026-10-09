// /Script/Landscape.ControlPointMeshActor
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Landscape/Classes/ControlPointMeshActor.h

UCLASS(NotPlaceable, Config=Engine)
class AControlPointMeshActor : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UControlPointMeshComponent* ControlPointMeshComponent;  // 0x0220, size 0x8
};
