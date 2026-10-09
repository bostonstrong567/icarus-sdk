// /Script/Engine.ChaosPhysicsSettings
// size 0x3, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsSettings.h

USTRUCT()
struct FChaosPhysicsSettings
{
public:
    UPROPERTY(EditAnywhere) EChaosThreadingMode DefaultThreadingModel;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) EChaosSolverTickMode DedicatedThreadTickMode;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere) EChaosBufferMode DedicatedThreadBufferMode;  // 0x0002, size 0x1
};
