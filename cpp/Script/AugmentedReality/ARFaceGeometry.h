// /Script/AugmentedReality.ARFaceGeometry
// Derives from: UARTrackedGeometry > UObject
// size 0x1F0, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTrackable.h

UCLASS()
class UARFaceGeometry : public UARTrackedGeometry
{
public:
    UPROPERTY(BlueprintReadOnly) FVector LookAtTarget;  // 0x00F8, size 0xC
    UPROPERTY(BlueprintReadOnly) bool bIsTracked;  // 0x0104, size 0x1
    UPROPERTY() TMap<EARFaceBlendShape, float> BlendShapes;  // 0x0108, size 0x50
    UPROPERTY() FTransform LeftEyeTransform;  // 0x0190, size 0x30
    UPROPERTY() FTransform RightEyeTransform;  // 0x01C0, size 0x30

    // Not reflected: the engine's scripting cannot see these.
    TArray<FVector,TSizedDefaultAllocator<32> > VertexBuffer;  // 0x0158, private
    TArray<int,TSizedDefaultAllocator<32> > IndexBuffer;  // 0x0168, private
    TArray<FVector2D,TSizedDefaultAllocator<32> > UVs;  // 0x0178, private

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetBlendShapeValue(EARFaceBlendShape BlendShape) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) TMap<EARFaceBlendShape, float> GetBlendShapes() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetLocalSpaceEyeTransform(EAREye Eye) const;  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetWorldSpaceEyeTransform(EAREye Eye) const;  // parameters 0x40
};
