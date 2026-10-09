// /Script/HairStrandsCore.GroomBlueprintLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomBlueprintLibrary.h

UCLASS()
class UGroomBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAsset(UGroomAsset* GroomAsset, UGeometryCache* GeometryCache, int32 NumInterpolationPoints, UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAssetWithPath(FString DesiredPackagePath, UGroomAsset* GroomAsset, UGeometryCache* GeometryCache, int32 NumInterpolationPoints, UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static UGroomBindingAsset* CreateNewGroomBindingAsset(UGroomAsset* InGroomAsset, USkeletalMesh* InSkeletalMesh, int32 InNumInterpolationPoints, USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(FString InDesiredPackagePath, UGroomAsset* InGroomAsset, USkeletalMesh* InSkeletalMesh, int32 InNumInterpolationPoints, USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection);  // parameters 0x40
};
