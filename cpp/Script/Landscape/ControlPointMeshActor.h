// /Script/Landscape.ControlPointMeshActor
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Landscape/Classes/ControlPointMeshActor.h

UCLASS(NotPlaceable, Config=Engine)
class AControlPointMeshActor : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UControlPointMeshComponent* ControlPointMeshComponent;  // 0x0220, size 0x8
};
