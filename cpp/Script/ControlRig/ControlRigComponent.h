// /Script/ControlRig.ControlRigComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x530, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/ControlRigComponent.h

UCLASS(Config=Engine)
class UControlRigComponent : public UPrimitiveComponent
{
public:
    UPROPERTY(EditAnywhere) TSubclassOf<UControlRig> ControlRigClass;  // 0x0450, size 0x8
    UPROPERTY(BlueprintAssignable) FControlRigComponentDelegate OnPostInitializeDelegate;  // 0x0458, size 0x10
    UPROPERTY(BlueprintAssignable) FControlRigComponentDelegate OnPreSetupDelegate;  // 0x0468, size 0x10
    UPROPERTY(BlueprintAssignable) FControlRigComponentDelegate OnPostSetupDelegate;  // 0x0478, size 0x10
    UPROPERTY(BlueprintAssignable) FControlRigComponentDelegate OnPreUpdateDelegate;  // 0x0488, size 0x10
    UPROPERTY(BlueprintAssignable) FControlRigComponentDelegate OnPostUpdateDelegate;  // 0x0498, size 0x10
    UPROPERTY(EditAnywhere) TArray<FControlRigComponentMappedElement> MappedElements;  // 0x04A8, size 0x10
    UPROPERTY(EditAnywhere) bool bResetTransformBeforeTick;  // 0x04B8, size 0x1
    UPROPERTY(EditAnywhere) bool bResetInitialsBeforeSetup;  // 0x04B9, size 0x1
    UPROPERTY(EditAnywhere) bool bUpdateRigOnTick;  // 0x04BA, size 0x1
    UPROPERTY(EditAnywhere) bool bUpdateInEditor;  // 0x04BB, size 0x1
    UPROPERTY(EditAnywhere) bool bDrawBones;  // 0x04BC, size 0x1
    UPROPERTY(EditAnywhere) bool bShowDebugDrawing;  // 0x04BD, size 0x1
    UPROPERTY(Transient) UControlRig* ControlRig;  // 0x04C0, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TMap<USkeletalMeshComponent *,UControlRigComponent::FCachedSkeletalMeshComponentSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent *,UControlRigComponent::FCachedSkeletalMeshComponentSettings,0> > CachedSkeletalMeshComponentSettings;  // 0x04C8, private
    UControlRigComponent::FControlRigComponentEvent ControlRigCreatedEvent;  // 0x0518, private

    UFUNCTION(BlueprintCallable) void AddMappedCompleteSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void AddMappedSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void ClearMappedElements();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool DoesElementExist(FName Name, ERigElementType ElementType);  // parameters 0xA
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetAbsoluteTime() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetBoneTransform(FName BoneName, EControlRigComponentSpace Space);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetControlBool(FName ControlName);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetControlFloat(FName ControlName);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetControlInt(FName ControlName);  // parameters 0xC
    UFUNCTION(BlueprintCallable) FTransform GetControlOffset(FName ControlName, EControlRigComponentSpace Space);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetControlPosition(FName ControlName, EControlRigComponentSpace Space);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) UControlRig* GetControlRig();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator GetControlRotator(FName ControlName, EControlRigComponentSpace Space);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetControlScale(FName ControlName, EControlRigComponentSpace Space);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetControlTransform(FName ControlName, EControlRigComponentSpace Space);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector2D GetControlVector2D(FName ControlName);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FName> GetElementNames(ERigElementType ElementType);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace Space);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void Initialize();
    UFUNCTION(BlueprintNativeEvent) void OnPostInitialize(UControlRigComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnPostSetup(UControlRigComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnPostUpdate(UControlRigComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnPreSetup(UControlRigComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnPreUpdate(UControlRigComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetBoneInitialTransformsFromSkeletalMesh(USkeletalMesh* InSkeletalMesh);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren);  // parameters 0x49
    UFUNCTION(BlueprintCallable) void SetControlBool(FName ControlName, bool Value);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetControlFloat(FName ControlName, float Value);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetControlInt(FName ControlName, int32 Value);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace Space);  // parameters 0x41
    UFUNCTION(BlueprintCallable) void SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace Space);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace Space);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace Space);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace Space);  // parameters 0x41
    UFUNCTION(BlueprintCallable) void SetControlVector2D(FName ControlName, FVector2D Value);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren);  // parameters 0x42
    UFUNCTION(BlueprintCallable) void SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace Space);  // parameters 0x41
    UFUNCTION(BlueprintCallable) void SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Update(float DeltaTime);  // parameters 0x4

    // Virtual functions that start here:
    //   OnPostInitialize_Implementation, OnPostSetup_Implementation, OnPostUpdate_Implementation
    //   OnPreSetup_Implementation, OnPreUpdate_Implementation
};
