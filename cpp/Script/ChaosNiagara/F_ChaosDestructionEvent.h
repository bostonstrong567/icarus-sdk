// /Script/ChaosNiagara.ChaosDestructionEvent
// size 0x44, declared in Engine/Plugins/Experimental/ChaosNiagara/Source/ChaosNiagara/Classes/NiagaraDataInterfaceChaosDestruction.h

USTRUCT()
struct FChaosDestructionEvent
{
public:
    UPROPERTY(EditAnywhere) FVector Position;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere) FVector Normal;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere) FVector Velocity;  // 0x0018, size 0xC
    UPROPERTY(EditAnywhere) FVector AngularVelocity;  // 0x0024, size 0xC
    UPROPERTY(EditAnywhere) float ExtentMin;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere) float ExtentMax;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) int32 ParticleID;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) float Time;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere) int32 Type;  // 0x0040, size 0x4
};
