// /Script/Engine.VectorFieldVolume
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/VectorField/VectorFieldVolume.h

UCLASS(MinimalAPI, Config=Engine)
class AVectorFieldVolume : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UVectorFieldComponent* VectorFieldComponent;  // 0x0220, size 0x8
};
