// /Script/ControlRig.ControlRig
// Derives from: UObject
// size 0x650, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/ControlRig.h

UCLASS(Abstract, EditInlineNew)
class UControlRig : public UObject, public INodeMappingProviderInterface, public IInterface_AssetUserData
{
public:
    UPROPERTY(Transient) ERigExecutionType ExecutionType;  // 0x0045, size 0x1
    UPROPERTY() URigVM* VM;  // 0x0048, size 0x8
    UPROPERTY() FRigHierarchyContainer Hierarchy;  // 0x0050, size 0x368
    UPROPERTY() TSoftObjectPtr<UControlRigGizmoLibrary> GizmoLibrary;  // 0x03B8, size 0x28
    UPROPERTY(Deprecated) TMap<FName, FCachedPropertyPath> InputProperties;  // 0x03F0, size 0x50
    UPROPERTY(Deprecated) TMap<FName, FCachedPropertyPath> OutputProperties;  // 0x0440, size 0x50
    UPROPERTY() FControlRigDrawContainer DrawContainer;  // 0x0490, size 0x18
    UPROPERTY(Transient) UAnimationDataSourceRegistry* DataSourceRegistry;  // 0x04C0, size 0x8
    UPROPERTY(Transient) TArray<FName> EventQueue;  // 0x04C8, size 0x10
    UPROPERTY() FRigInfluenceMapPerEvent Influences;  // 0x0550, size 0x60
    UPROPERTY(Transient, BlueprintReadWrite) UControlRig* InteractionRig;  // 0x05B0, size 0x8
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) TSubclassOf<UControlRig> InteractionRigClass;  // 0x05B8, size 0x8
    UPROPERTY(EditAnywhere) TArray<UAssetUserData*> AssetUserData;  // 0x05C0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    float DeltaTime;  // 0x0038, private
    float AbsoluteTime;  // 0x003C, private
    float FramesPerSecond;  // 0x0040, private
    bool bAccumulateTime;  // 0x0044, private
    TSharedPtr<IControlRigObjectBinding,0> ObjectBinding;  // 0x03E0, private
    FControlRigDrawInterface DrawInterface;  // 0x04A8, private
    UControlRig::FControlRigExecuteEvent InitializedEvent;  // 0x04D8, private
    UControlRig::FControlRigExecuteEvent PreSetupEvent;  // 0x04F0, private
    UControlRig::FControlRigExecuteEvent PostSetupEvent;  // 0x0508, private
    UControlRig::FControlRigExecuteEvent ExecutedEvent;  // 0x0520, private
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,FRigEventContext const &),FDefaultDelegateUserPolicy> RigEventDelegate;  // 0x0538, private
    bool bRequiresInitExecution;  // 0x05D0, protected
    bool bRequiresSetupEvent;  // 0x05D1, protected
    bool bSetupModeEnabled;  // 0x05D2, protected
    bool bResetInitialTransformsBeforeSetup;  // 0x05D3, protected
    bool bManipulationEnabled;  // 0x05D4, protected
    int32 InitBracket;  // 0x05D8, protected
    int32 UpdateBracket;  // 0x05DC, protected
    int32 PreSetupBracket;  // 0x05E0, protected
    int32 PostSetupBracket;  // 0x05E4, protected
    int32 InteractionBracket;  // 0x05E8, protected
    int32 InterRigSyncBracket;  // 0x05EC, protected
    TWeakObjectPtr<USceneComponent,FWeakObjectPtr> OuterSceneComponent;  // 0x05F0, protected
    UControlRig::FFilterControlEvent OnFilterControl;  // 0x05F8, protected
    UControlRig::FControlModifiedEvent OnControlModified;  // 0x0610, protected
    UControlRig::FControlSelectedEvent OnControlSelected;  // 0x0628, protected
    TArray<FRigControl,TSizedDefaultAllocator<32> > QueuedModifiedControls;  // 0x0640, protected

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
