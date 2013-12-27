	double r,b;
	CRect v;
	GetClientRect (&v);
	r=v.right;
	b=v.bottom;
	//поверхня під столиком
	dc.Rectangle(r/15,b-b/40,r-r/15,b-b/25);
	//кулька
	dc.MoveTo(r/2+(b/50+r/50),b/6);
	dc.AngleArc(r/2,b/6,b/50+r/50,0,360);
}
