// /Script/LiveLink.LiveLinkRemapAsset
// Derives from: ULiveLinkRetargetAsset > UObject
// size 0xC8, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/LiveLinkRemapAsset.h

UCLASS()
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
private:
    TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0> > BoneNameMap;  // 0x0028, not reflected
    TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0> > CurveNameMap;  // 0x0078, not reflected
public:
    UFUNCTION(BlueprintNativeEvent) FName GetRemappedBoneName(FName BoneName) const;  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) FName GetRemappedCurveName(FName CurveName) const;  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void RemapCurveElements(TMap<FName, float>& CurveItems) const;  // parameters 0x50

    // Virtual functions that start here:
    //   GetRemappedBoneName_Implementation, GetRemappedCurveName_Implementation
    //   RemapCurveElements_Implementation
};
