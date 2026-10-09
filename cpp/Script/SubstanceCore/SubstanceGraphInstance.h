// /Script/SubstanceCore.SubstanceGraphInstance
// Derives from: UObject
// size 0x178, declared in Engine/Plugins/Marketplace/Substance/Source/SubstanceCore/Classes/SubstanceGraphInstance.h

UCLASS()
class USubstanceGraphInstance : public UObject
{
public:
    std::shared_ptr<SubstanceAir::GraphInstance> Instance;  // 0x0028, not reflected
    UPROPERTY() FString PackageURL;  // 0x0038, size 0x10
    UPROPERTY() USubstanceInstanceFactory* ParentFactory;  // 0x0048, size 0x8
    UPROPERTY() TMap<uint32, UTexture2D*> ImageSources;  // 0x0050, size 0x50
    UPROPERTY(EditAnywhere) UMaterial* CreatedMaterial;  // 0x00A0, size 0x8
    UPROPERTY(EditAnywhere) UMaterialInstanceConstant* ConstantCreatedMaterial;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere) UMaterialInstanceDynamic* DynamicCreatedMaterial;  // 0x00B0, size 0x8
    UPROPERTY() TMap<int32, FGuid> OutputTextureLinkData;  // 0x00B8, size 0x50
    UPROPERTY() TMap<uint32, USubstanceOutputData*> OutputInstances;  // 0x0108, size 0x50
    UPROPERTY(BlueprintReadOnly) bool bIsFrozen;  // 0x0158, size 0x1
    GraphInstanceData mUserData;  // 0x015C, not reflected
    TSharedPtr<SubstanceAir::Preset,0> InstancePreset;  // 0x0168, not reflected

    UFUNCTION(BlueprintCallable) void CreateMaterial(FString PackageName, UMaterial* ParentMaterial);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void CreateOutputs();
    UFUNCTION(BlueprintCallable) USubstanceGraphInstance* Duplicate();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void EnableOutput(FString Identifier, bool value);  // parameters 0x11
    UFUNCTION(BlueprintCallable) UMaterialInstanceConstant* GetConstantMaterial();  // parameters 0x8
    UFUNCTION(BlueprintCallable) UMaterialInstanceDynamic* GetDynamicMaterialInstance(FName Name, UMaterial* InParentMaterial);  // parameters 0x18
    UFUNCTION(BlueprintCallable) FSubstanceFloatInputDesc GetFloatInputDesc(FString Identifier);  // parameters 0x58
    UFUNCTION(BlueprintCallable) bool GetInputBool(FString Identifier);  // parameters 0x11
    UFUNCTION(BlueprintCallable) FLinearColor GetInputColor(FString Identifier);  // parameters 0x20
    UFUNCTION(BlueprintCallable) TArray<float> GetInputFloat(FString Identifier);  // parameters 0x20
    UFUNCTION(BlueprintCallable) TArray<int32> GetInputInt(FString Identifier);  // parameters 0x20
    UFUNCTION(BlueprintCallable) TArray<FString> GetInputNames();  // parameters 0x10
    UFUNCTION(BlueprintCallable) FString GetInputString(FString Identifier);  // parameters 0x20
    UFUNCTION(BlueprintCallable) TEnumAsByte<ESubstanceInputType> GetInputType(FString InputName);  // parameters 0x11
    UFUNCTION(BlueprintCallable) FSubstanceInstanceDesc GetInstanceDesc();  // parameters 0x20
    UFUNCTION(BlueprintCallable) FSubstanceIntInputDesc GetIntInputDesc(FString Identifier);  // parameters 0x58
    UFUNCTION(BlueprintCallable) TArray<FString> GetOutputNames();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RenderSync();
    UFUNCTION(BlueprintCallable) void SetInputBool(FString Identifier, bool Bool);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SetInputColor(FString Identifier, const FLinearColor& Color);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetInputFloat(FString Identifier, const TArray<float>& InputValues);  // parameters 0x20
    UFUNCTION(BlueprintCallable) bool SetInputImg(FString InputName, UObject* Value);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void SetInputInt(FString Identifier, const TArray<int32>& InputValues);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetInputString(FString Identifier, FString Value);  // parameters 0x20
};
