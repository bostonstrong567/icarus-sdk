// /Script/Icarus.OrchestrationEvent
// Derives from: UObject
// size 0xD8, declared in Icarus/Source/Icarus/Subsystems/World/IcarusOrchestrationSubsystem.h

UCLASS()
class UOrchestrationEvent : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    EOrchestrationEvents EventEnum;  // 0x0028
    TSet<enum EOrchestrationStateFlags,DefaultKeyFuncs<enum EOrchestrationStateFlags,0>,FDefaultSetAllocator> RequiredFlags;  // 0x0030
    EOrchestrationStateFlags CorrespondingStateFlag;  // 0x0080
    TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,UFunction *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,UFunction *,0> > BoundFunctions;  // 0x0088
};
