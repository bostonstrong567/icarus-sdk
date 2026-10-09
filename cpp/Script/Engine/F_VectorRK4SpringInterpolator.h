// /Script/Engine.VectorRK4SpringInterpolator
// size 0x8

USTRUCT()
struct FVectorRK4SpringInterpolator
{
public:
    UPROPERTY(EditAnywhere) float StiffnessConstant;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float DampeningRatio;  // 0x0004, size 0x4
};
