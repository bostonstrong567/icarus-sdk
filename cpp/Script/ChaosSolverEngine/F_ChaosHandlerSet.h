// /Script/ChaosSolverEngine.ChaosHandlerSet
// size 0x58, declared in Engine/Source/Runtime/Experimental/ChaosSolverEngine/Public/Chaos/ChaosGameplayEventDispatcher.h

USTRUCT()
struct FChaosHandlerSet
{
public:
    bool bLegacyComponentNotify;  // 0x0000, not reflected
    UPROPERTY() TSet<UObject*> ChaosHandlers;  // 0x0008, size 0x50
};
