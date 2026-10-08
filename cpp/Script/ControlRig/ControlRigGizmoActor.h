// /Script/ControlRig.ControlRigGizmoActor
// Derives from: AActor > UObject
// size 0x248, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/ControlRigGizmoActor.h

UCLASS(Transient, NotPlaceable, Config=Engine)
class AControlRigGizmoActor : public AActor
{
public:
    UPROPERTY(Instanced) USceneComponent* ActorRootComponent;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UStaticMeshComponent* StaticMeshComponent;  // 0x0228, size 0x8
    UPROPERTY() uint32 ControlRigIndex;  // 0x0230, size 0x4
    UPROPERTY() FName ControlName;  // 0x0234, size 0x8
    UPROPERTY() FName ColorParameterName;  // 0x023C, size 0x8
    UPROPERTY(BlueprintReadWrite) uint8 bEnabled : 1;  // 0x0244, mask 0x01
    UPROPERTY(BlueprintReadWrite) uint8 bSelected : 1;  // 0x0244, mask 0x02
    UPROPERTY(BlueprintReadWrite) uint8 bSelectable : 1;  // 0x0244, mask 0x04
    UPROPERTY(BlueprintReadWrite) uint8 bHovered : 1;  // 0x0244, mask 0x08

    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetGlobalTransform() const;  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsEnabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsHovered() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsSelectedInEditor() const;  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnEnabledChanged(bool bIsEnabled);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnHoveredChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnManipulatingChanged(bool bIsManipulating);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnTransformChanged(const FTransform& NewTransform);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SetEnabled(bool bInEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetGlobalTransform(const FTransform& InTransform);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SetHovered(bool bInHovered);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSelectable(bool bInSelectable);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSelected(bool bInSelected);  // parameters 0x1

    // Virtual functions that start here:
    //   IsEnabled, IsHovered, IsSelectable, IsSelectedInEditor, SetEnabled, SetGizmoColor, SetHovered
    //   SetSelectable, SetSelected, TickControl
};
