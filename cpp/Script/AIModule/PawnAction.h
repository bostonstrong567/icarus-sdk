// /Script/AIModule.PawnAction
// Derives from: UObject
// size 0x90, declared in Engine/Source/Runtime/AIModule/Classes/Actions/PawnAction.h

UCLASS(Abstract, EditInlineNew)
class UPawnAction : public UObject
{
public:
    UPROPERTY(Transient) UPawnAction* ChildAction;  // 0x0028, size 0x8
    UPROPERTY(Transient) UPawnAction* ParentAction;  // 0x0030, size 0x8
    UPROPERTY(Transient, Instanced) UPawnActionsComponent* OwnerComponent;  // 0x0038, size 0x8
    UPROPERTY(Transient) UObject* Instigator;  // 0x0040, size 0x8
    UPROPERTY(Transient, Instanced) UBrainComponent* BrainComp;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAllowNewSameClassInstance : 1;  // 0x0080, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bReplaceActiveSameClassInstance : 1;  // 0x0080, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bShouldPauseMovement : 1;  // 0x0080, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAlwaysNotifyOnFinished : 1;  // 0x0080, mask 0x08

    // Not reflected: the engine's scripting cannot see these.
    TArray<TSharedPtr<FAIMessageObserver,0>,TSizedDefaultAllocator<32> > MessageHandlers;  // 0x0050, private
    EAIRequestPriority::Type ExecutionPriority;  // 0x0060, private
    TDelegate<void __cdecl(UPawnAction &,enum EPawnActionEventType::Type),FDefaultDelegateUserPolicy> ActionObserver;  // 0x0068, private
    FAIRequestID RequestID;  // 0x0078, protected
    FAIResourcesSet RequiredResources;  // 0x007C, protected
    uint32 : 1 bWantsTick;  // 0x0080, protected
    uint32 : 1 bPaused;  // 0x0080, private
    uint32 : 1 bHasBeenStarted;  // 0x0080, private
    uint32 : 1 bFailedToStart;  // 0x0080, private
    EPawnActionAbortState::Type AbortState;  // 0x0084, private
    EPawnActionResult::Type FinishResult;  // 0x0088, private
    int32 IndexOnStack;  // 0x008C, private

    UFUNCTION(BlueprintCallable) static UPawnAction* CreateActionInstance(UObject* WorldContextObject, TSubclassOf<UPawnAction> ActionClass);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Finish(TEnumAsByte<EPawnActionResult> WithResult);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<EAIRequestPriority> GetActionPriority();  // parameters 0x1

    // Virtual functions that start here:
    //   Finish, GetDisplayName, HandleAIMessage, OnChildFinished, OnFinished, Pause, PerformAbort, Resume
    //   Start, Tick
};
