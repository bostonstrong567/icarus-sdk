// /Script/InteractiveToolsFramework.GizmoLambdaStateTarget
// Derives from: UObject
// size 0xB0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/StateTargets.h

UCLASS()
class UGizmoLambdaStateTarget : public UObject, public IGizmoStateTarget
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TUniqueFunction<void __cdecl(void)> BeginUpdateFunction;  // 0x0030
    TUniqueFunction<void __cdecl(void)> EndUpdateFunction;  // 0x0070
};
