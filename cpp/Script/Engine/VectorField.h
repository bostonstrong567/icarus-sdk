// /Script/Engine.VectorField
// Derives from: UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/VectorField/VectorField.h

UCLASS(MinimalAPI)
class UVectorField : public UObject
{
public:
    UPROPERTY(EditAnywhere) FBox Bounds;  // 0x0028, size 0x1C
    UPROPERTY(EditAnywhere) float Intensity;  // 0x0044, size 0x4

    // Virtual functions that start here:
    //   InitInstance
};
