// /Script/Engine.SplineMeshActor
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/Engine/SplineMeshActor.h

UCLASS(Config=Engine)
class ASplineMeshActor : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USplineMeshComponent* SplineMeshComponent;  // 0x0220, size 0x8
};
