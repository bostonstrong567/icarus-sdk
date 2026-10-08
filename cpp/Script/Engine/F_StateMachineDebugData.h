// /Script/Engine.StateMachineDebugData
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h

USTRUCT()
struct FStateMachineDebugData
{

    // Not reflected:
    TMap<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,int,0> > NodeToStateIndex;  // 0x0000
    TMap<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,int,0> > NodeToTransitionIndex;  // 0x0050
    TWeakObjectPtr<UAnimGraphNode_StateMachineBase,FWeakObjectPtr> MachineInstanceNode;  // 0x00A0
    int32 MachineIndex;  // 0x00A8
};
