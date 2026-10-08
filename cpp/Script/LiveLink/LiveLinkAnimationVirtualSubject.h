// /Script/LiveLink.LiveLinkAnimationVirtualSubject
// Derives from: ULiveLinkVirtualSubject > UObject
// size 0x168, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/LiveLinkAnimationVirtualSubject.h

UCLASS()
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{
public:
    UPROPERTY(EditAnywhere) bool bAppendSubjectNameToBones;  // 0x0161, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    bool bInvalidate;  // 0x0160, protected
};
