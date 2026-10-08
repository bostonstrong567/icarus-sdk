// /Script/LiveLink.LiveLinkBlueprintLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/LiveLinkBlueprintLibrary.h

UCLASS()
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 ChildCount(FLiveLinkTransform& LiveLinkTransform);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static void ComponentSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static bool EvaluateLiveLinkFrame(FLiveLinkSubjectRepresentation SubjectRepresentation, FLiveLinkBaseBlueprintData& OutBlueprintData);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static bool EvaluateLiveLinkFrameAtSceneTime(FLiveLinkSubjectName SubjectName, TSubclassOf<ULiveLinkRole> Role, FTimecode SceneTime, FLiveLinkBaseBlueprintData& OutBlueprintData);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static bool EvaluateLiveLinkFrameAtWorldTimeOffset(FLiveLinkSubjectName SubjectName, TSubclassOf<ULiveLinkRole> Role, float WorldTimeOffset, FLiveLinkBaseBlueprintData& OutBlueprintData);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static bool EvaluateLiveLinkFrameWithSpecificRole(FLiveLinkSubjectName SubjectName, TSubclassOf<ULiveLinkRole> Role, FLiveLinkBaseBlueprintData& OutBlueprintData);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GetAnimationFrameData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkAnimationFrameData& AnimationFrameData);  // parameters 0xC9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GetAnimationStaticData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkSkeletonStaticData& AnimationStaticData);  // parameters 0x49
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetBasicData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkBasicBlueprintData& BasicBlueprintData);  // parameters 0xD0
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetChildren(FLiveLinkTransform& LiveLinkTransform, TArray<FLiveLinkTransform>& Children);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetCurves(FSubjectFrameHandle& SubjectFrameHandle, TMap<FName, float>& Curves);  // parameters 0x68
    UFUNCTION(BlueprintCallable) static TArray<FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static TSubclassOf<ULiveLinkRole> GetLiveLinkSubjectRole(FLiveLinkSubjectName SubjectName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<FLiveLinkSubjectKey> GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetMetadata(FSubjectFrameHandle& SubjectFrameHandle, FSubjectMetadata& Metadata);  // parameters 0x88
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetParent(FLiveLinkTransform& LiveLinkTransform, FLiveLinkTransform& Parent);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GetPropertyValue(FLiveLinkBasicBlueprintData& BasicData, FName PropertyName, float& Value);  // parameters 0xC5
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetRootTransform(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkTransform& LiveLinkTransform);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static FText GetSourceMachineName(FLiveLinkSourceHandle& SourceHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static FText GetSourceStatus(FLiveLinkSourceHandle& SourceHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static FText GetSourceType(FLiveLinkSourceHandle& SourceHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static TSubclassOf<ULiveLinkRole> GetSpecificLiveLinkSubjectRole(FLiveLinkSubjectKey SubjectKey);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetTransformByIndex(FSubjectFrameHandle& SubjectFrameHandle, int32 TransformIndex, FLiveLinkTransform& LiveLinkTransform);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetTransformByName(FSubjectFrameHandle& SubjectFrameHandle, FName TransformName, FLiveLinkTransform& LiveLinkTransform);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool HasParent(FLiveLinkTransform& LiveLinkTransform);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static bool IsLiveLinkSubjectEnabled(FLiveLinkSubjectName SubjectName);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static bool IsSourceStillValid(FLiveLinkSourceHandle& SourceHandle);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static bool IsSpecificLiveLinkSubjectEnabled(FLiveLinkSubjectKey SubjectKey, bool bForThisFrame);  // parameters 0x1A
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumberOfTransforms(FSubjectFrameHandle& SubjectFrameHandle);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static void ParentBoneSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static bool RemoveSource(FLiveLinkSourceHandle& SourceHandle);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void SetLiveLinkSubjectEnabled(FLiveLinkSubjectKey SubjectKey, bool bEnabled);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static void TransformName(FLiveLinkTransform& LiveLinkTransform, FName& Name);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static void TransformNames(FSubjectFrameHandle& SubjectFrameHandle, TArray<FName>& TransformNames);  // parameters 0x28
};
