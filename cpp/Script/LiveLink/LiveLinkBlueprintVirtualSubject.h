// /Script/LiveLink.LiveLinkBlueprintVirtualSubject
// Derives from: ULiveLinkVirtualSubject > UObject
// size 0x188, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/VirtualSubjects/LiveLinkBlueprintVirtualSubject.h

UCLASS(Abstract)
class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> CachedStaticData;  // 0x0160, private

    UFUNCTION(BlueprintImplementableEvent) void OnInitialize();
    UFUNCTION(BlueprintImplementableEvent) void OnUpdate();
    UFUNCTION(BlueprintCallable) bool UpdateVirtualSubjectFrameData_Internal(const FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime);  // parameters 0xA2
    UFUNCTION(BlueprintCallable) bool UpdateVirtualSubjectStaticData_Internal(const FLiveLinkBaseStaticData& InStruct);  // parameters 0x11
};
