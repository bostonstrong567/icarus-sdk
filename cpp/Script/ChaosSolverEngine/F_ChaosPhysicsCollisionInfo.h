// /Script/ChaosSolverEngine.ChaosPhysicsCollisionInfo
// size 0x70, declared in Engine/Source/Runtime/Experimental/ChaosSolverEngine/Public/Chaos/ChaosNotifyHandlerInterface.h

USTRUCT()
struct FChaosPhysicsCollisionInfo
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UPrimitiveComponent* Component;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UPrimitiveComponent* OtherComponent;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Normal;  // 0x001C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector AccumulatedImpulse;  // 0x0028, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Velocity;  // 0x0034, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector OtherVelocity;  // 0x0040, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector AngularVelocity;  // 0x004C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector OtherAngularVelocity;  // 0x0058, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Mass;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OtherMass;  // 0x0068, size 0x4
};
