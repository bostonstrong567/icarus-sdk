// /Script/UMG.DragDropOperation
// Derives from: UObject
// size 0x88, declared in Engine/Source/Runtime/UMG/Public/Blueprint/DragDropOperation.h

UCLASS()
class UDragDropOperation : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Tag;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* Payload;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UWidget* DefaultDragVisual;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDragPivot Pivot;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Offset;  // 0x004C, size 0x8
    UPROPERTY(BlueprintAssignable) FOnDragDropMulticast OnDrop;  // 0x0058, size 0x10
    UPROPERTY(BlueprintAssignable) FOnDragDropMulticast OnDragCancelled;  // 0x0068, size 0x10
    UPROPERTY(BlueprintAssignable) FOnDragDropMulticast OnDragged;  // 0x0078, size 0x10

    UFUNCTION(BlueprintNativeEvent) void DragCancelled(const FPointerEvent& PointerEvent);  // parameters 0x70
    UFUNCTION(BlueprintNativeEvent) void Dragged(const FPointerEvent& PointerEvent);  // parameters 0x70
    UFUNCTION(BlueprintNativeEvent) void Drop(const FPointerEvent& PointerEvent);  // parameters 0x70

    // Virtual functions that start here:
    //   DragCancelled_Implementation, Dragged_Implementation, Drop_Implementation
};
