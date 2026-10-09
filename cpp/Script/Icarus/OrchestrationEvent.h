// /Script/Icarus.OrchestrationEvent
// Derives from: UObject
// size 0xD8, declared in Icarus/Source/Icarus/Subsystems/World/IcarusOrchestrationSubsystem.h

UCLASS()
class UOrchestrationEvent : public UObject
{
public:
    EOrchestrationEvents EventEnum;  // 0x0028, not reflected
    TSet<enum EOrchestrationStateFlags,DefaultKeyFuncs<enum EOrchestrationStateFlags,0>,FDefaultSetAllocator> RequiredFlags;  // 0x0030, not reflected
    EOrchestrationStateFlags CorrespondingStateFlag;  // 0x0080, not reflected
    TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,UFunction *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,UFunction *,0> > BoundFunctions;  // 0x0088, not reflected
};
