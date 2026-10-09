// /Script/Engine.CurveTable
// Derives from: UObject
// size 0xA0, declared in Engine/Source/Runtime/Engine/Classes/Engine/CurveTable.h

UCLASS(MinimalAPI)
class UCurveTable : public UObject
{
protected:
    TMap<FName,FRealCurve *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve *,0> > RowMap;  // 0x0030, not reflected
    ECurveTableMode CurveTableMode;  // 0x0098, not reflected
private:
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnCurveTableChangedDelegate;  // 0x0080, not reflected

    // Virtual functions that start here:
    //   EmptyTable
};
