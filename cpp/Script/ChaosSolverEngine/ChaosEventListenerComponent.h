// /Script/ChaosSolverEngine.ChaosEventListenerComponent
// Derives from: UActorComponent > UObject
// size 0xB8, declared in Engine/Source/Runtime/Experimental/ChaosSolverEngine/Public/Chaos/ChaosEventListenerComponent.h

UCLASS(Config=Engine)
class UChaosEventListenerComponent : public UActorComponent
{
public:

    // Not reflected: the engine's scripting cannot see these.
    float LastCollisionTickTime;  // 0x00B0, protected
};
