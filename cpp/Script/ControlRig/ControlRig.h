// /Script/ControlRig.ControlRig
// Derives from: UObject
// size 0x650, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/ControlRig.h

UCLASS(Abstract, EditInlineNew)
class UControlRig : public UObject, public INodeMappingProviderInterface, public IInterface_AssetUserData
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Transient) ERigExecutionType ExecutionType;  // 0x0045, size 0x1
protected:
    UPROPERTY(EditAnywhere) TArray<UAssetUserData*> AssetUserData;  // 0x05C0, size 0x10
    bool bRequiresInitExecution;  // 0x05D0, not reflected
    bool bRequiresSetupEvent;  // 0x05D1, not reflected
    bool bSetupModeEnabled;  // 0x05D2, not reflected
    bool bResetInitialTransformsBeforeSetup;  // 0x05D3, not reflected
    bool bManipulationEnabled;  // 0x05D4, not reflected
    int32 InitBracket;  // 0x05D8, not reflected
    int32 UpdateBracket;  // 0x05DC, not reflected
    int32 PreSetupBracket;  // 0x05E0, not reflected
    int32 PostSetupBracket;  // 0x05E4, not reflected
    int32 InteractionBracket;  // 0x05E8, not reflected
    int32 InterRigSyncBracket;  // 0x05EC, not reflected
    TWeakObjectPtr<USceneComponent,FWeakObjectPtr> OuterSceneComponent;  // 0x05F0, not reflected
    UControlRig::FFilterControlEvent OnFilterControl;  // 0x05F8, not reflected
    UControlRig::FControlModifiedEvent OnControlModified;  // 0x0610, not reflected
    UControlRig::FControlSelectedEvent OnControlSelected;  // 0x0628, not reflected
    TArray<FRigControl,TSizedDefaultAllocator<32> > QueuedModifiedControls;  // 0x0640, not reflected
private:
    float DeltaTime;  // 0x0038, not reflected
    float AbsoluteTime;  // 0x003C, not reflected
    float FramesPerSecond;  // 0x0040, not reflected
    bool bAccumulateTime;  // 0x0044, not reflected
    UPROPERTY() URigVM* VM;  // 0x0048, size 0x8
    UPROPERTY() FRigHierarchyContainer Hierarchy;  // 0x0050, size 0x368
    UPROPERTY() TSoftObjectPtr<UControlRigGizmoLibrary> GizmoLibrary;  // 0x03B8, size 0x28
    TSharedPtr<IControlRigObjectBinding,0> ObjectBinding;  // 0x03E0, not reflected
    UPROPERTY(Deprecated) TMap<FName, FCachedPropertyPath> InputProperties;  // 0x03F0, size 0x50
    UPROPERTY(Deprecated) TMap<FName, FCachedPropertyPath> OutputProperties;  // 0x0440, size 0x50
    UPROPERTY() FControlRigDrawContainer DrawContainer;  // 0x0490, size 0x18
    FControlRigDrawInterface DrawInterface;  // 0x04A8, not reflected
    UPROPERTY(Transient) UAnimationDataSourceRegistry* DataSourceRegistry;  // 0x04C0, size 0x8
    UPROPERTY(Transient) TArray<FName> EventQueue;  // 0x04C8, size 0x10
    UControlRig::FControlRigExecuteEvent InitializedEvent;  // 0x04D8, not reflected
    UControlRig::FControlRigExecuteEvent PreSetupEvent;  // 0x04F0, not reflected
    UControlRig::FControlRigExecuteEvent PostSetupEvent;  // 0x0508, not reflected
    UControlRig::FControlRigExecuteEvent ExecutedEvent;  // 0x0520, not reflected
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,FRigEventContext const &),FDefaultDelegateUserPolicy> RigEventDelegate;  // 0x0538, not reflected
    UPROPERTY() FRigInfluenceMapPerEvent Influences;  // 0x0550, size 0x60
    UPROPERTY(Transient, BlueprintReadWrite) UControlRig* InteractionRig;  // 0x05B0, size 0x8
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) TSubclassOf<UControlRig> InteractionRigClass;  // 0x05B8, size 0x8
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) UControlRig* GetInteractionRig() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) TSubclassOf<UControlRig> GetInteractionRigClass() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetInteractionRig(UControlRig* InInteractionRig);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetInteractionRigClass(TSubclassOf<UControlRig> InInteractionRigClass);  // parameters 0x8

    // Virtual functions that start here:
    //   AvailableControls, AvailableSpaces, ClearControlSelection, CreateRigControlsForCurveContainer
    //   CurrentControlSelection, Evaluate_AnyThread, ExecuteUnits, FindControl, FindSpace
    //   GetControlGlobalTransform, GetControlLocalTransform, GetControlValueFromGlobalTransform
    //   GetControlsInOrder, GetGizmoLibrary, GetName, GetSpaceGlobalTransform, Initialize
    //   IsControlSelected, IsSetupModeEnabled, ManipulationEnabled, SelectControl, SetControlLocalTransform
    //   SetControlSpace, SetControlValueImpl, SetManipulationEnabled, SetSpaceGlobalTransform
    //   SetupControlFromGlobalTransform, ShouldApplyLimits
};
