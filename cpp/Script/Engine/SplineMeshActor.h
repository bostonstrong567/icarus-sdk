// /Script/Engine.SplineMeshActor
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/Engine/SplineMeshActor.h

UCLASS(Config=Engine)
class ASplineMeshActor : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USplineMeshComponent* SplineMeshComponent;  // 0x0220, size 0x8
};
