// /Script/LiveLink.LiveLinkBlueprintVirtualSubject
// Derives from: ULiveLinkVirtualSubject > UObject
// size 0x188, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/VirtualSubjects/LiveLinkBlueprintVirtualSubject.h

UCLASS(Abstract)
class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{
private:
    FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> CachedStaticData;  // 0x0160, not reflected
public:
    UFUNCTION(BlueprintImplementableEvent) void OnInitialize();
    UFUNCTION(BlueprintImplementableEvent) void OnUpdate();
    UFUNCTION(BlueprintCallable) bool UpdateVirtualSubjectFrameData_Internal(const FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime);  // parameters 0xA2
    UFUNCTION(BlueprintCallable) bool UpdateVirtualSubjectStaticData_Internal(const FLiveLinkBaseStaticData& InStruct);  // parameters 0x11
};
