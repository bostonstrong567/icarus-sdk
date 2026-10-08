// /Script/InteractiveToolsFramework.InteractiveToolPropertySet
// Derives from: UObject
// size 0x60, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InteractiveTool.h

UCLASS(Transient)
class UInteractiveToolPropertySet : public UObject
{
public:
    UPROPERTY() UInteractiveToolPropertySet* CachedProperties;  // 0x0038, size 0x8
    UPROPERTY() bool bIsPropertySetEnabled;  // 0x0040, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(UObject *,FProperty *),FDefaultDelegateUserPolicy> OnModified;  // 0x0048, protected

    // Virtual functions that start here:
    //   RestoreProperties, SaveProperties
};
