// /Script/LiveLink.LiveLinkComponent
// Derives from: UActorComponent > UObject
// size 0xD0, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/LiveLinkComponent.h

UCLASS(Config=Engine)
class ULiveLinkComponent : public UActorComponent
{
public:
    UPROPERTY(BlueprintAssignable) FLiveLinkTickSignature OnLiveLinkUpdated;  // 0x00B0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    bool bIsDirty;  // 0x00C0, private
    ILiveLinkClient * LiveLinkClient;  // 0x00C8, private

    UFUNCTION(BlueprintCallable) void GetAvailableSubjectNames(TArray<FName>& SubjectNames);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetSubjectData(FName SubjectName, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void GetSubjectDataAtSceneTime(FName SubjectName, const FTimecode& SceneTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void GetSubjectDataAtWorldTime(FName SubjectName, float WorldTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle);  // parameters 0x28
};
