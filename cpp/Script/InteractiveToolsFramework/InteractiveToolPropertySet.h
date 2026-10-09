// /Script/InteractiveToolsFramework.InteractiveToolPropertySet
// Derives from: UObject
// size 0x60, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InteractiveTool.h

UCLASS(Transient)
class UInteractiveToolPropertySet : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() UInteractiveToolPropertySet* CachedProperties;  // 0x0038, size 0x8
    UPROPERTY() bool bIsPropertySetEnabled;  // 0x0040, size 0x1
    TMulticastDelegate<void __cdecl(UObject *,FProperty *),FDefaultDelegateUserPolicy> OnModified;  // 0x0048, not reflected

    // Virtual functions that start here:
    //   RestoreProperties, SaveProperties
};
