// /Script/ChaosSolverEngine.BreakEventCallbackWrapper
// size 0x40, declared in Engine/Source/Runtime/Experimental/ChaosSolverEngine/Public/Chaos/ChaosGameplayEventDispatcher.h

USTRUCT()
struct FBreakEventCallbackWrapper
{
public:
    TFunction<void __cdecl(FChaosBreakEvent const &)> BreakEventCallback;  // 0x0000, not reflected
};
